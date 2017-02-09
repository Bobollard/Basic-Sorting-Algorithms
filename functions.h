#pragma once
#include <iostream>
#include <vector>

using namespace std;

template <class T>
void insertionSort(T arr[], int length)
{

	for (int i = 1; i < length; i++)
	{
		T x = arr[i];
		T j = i - 1;
		while (j >= 0 && arr[j] > x)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = x;
	}

}
template <class T>
void selectionSort(T arr[], int length)
{

	T min, tmp;
	for (int i = 0; i < length; i++)
	{
		min = i;
		for (int j = i; j < length; j++)
		{
			if (arr[j] < arr[min])
			{
				min = j;
			}
		}
		if (min != i)
		{
			tmp = arr[i];
			arr[i] = arr[min];
			arr[min] = tmp;
		}
	}

}
template <class T>
void bubbleSort(T arr[], int length)
{

	T tmp;
	int j = 0;
	bool check = true;

	while (check)
	{
		check = false;
		j++;
		for (int i = 0; i < length - j; i++)
		{
			if (arr[i + 1] < arr[i])
			{
				tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
				check = true;
			}
		}
	}
}

template <class T>
void merge(int low, int mid, int high, T arr[])
{
	int h, i, j, k;
	T tmp[4];
	h = low;
	i = low;
	j = mid + 1;

	while (j <= high && h <= mid)
	{
		if (arr[h] <= arr[j])
		{
			tmp[i] = arr[h];
			h++;
		}
		else
		{
			tmp[i] = arr[j];
			j++;
		}
		i++;
	}
	if (mid < h)
	{
		for (k = j; k <= high; k++)
		{
			tmp[i] = arr[k];
			i++;
		}
	}
	else
	{
		for (k = h; k <= mid; k++)
		{
			tmp[i] = arr[k];
			i++;
		}
	}
	for (k = low; k <= high; k++)
	{
		arr[k] = tmp[k];
	}
}

template <class T>
void mergeSort(T arr[], int low, int high)
{
	int mid = (low + high) / 2;
	mergeSort(arr, low, mid);
	mergeSort(arr, mid + 1, high);
	merge (low, mid, high, arr);
}