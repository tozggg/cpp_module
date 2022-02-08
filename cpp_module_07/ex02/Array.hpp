/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 17:57:35 by taejkim           #+#    #+#             */
/*   Updated: 2022/02/08 19:52:26 by taejkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
# include <exception>

template <typename T>
class Array
{
private:
	unsigned int	len;
	T*				arr;

public:
	Array();
	Array(unsigned int n);
	Array(const Array& other);
	~Array();

	Array&	operator=(const Array& other);
	T&		operator[](unsigned int idx) const;

	unsigned int size(void) const;

	class	OutofRangeException: public std::exception
	{
		const char* what(void) const throw();
	};
};

template<typename T>
Array<T>::Array(): len(0), arr(NULL)
{
}

template<typename T>
Array<T>::Array(unsigned int n): len(0), arr(NULL)
{
	len = n;
	if (len)
		arr = new T[len];
}

template<typename T>
Array<T>::Array(const Array& other): len(0), arr(NULL)
{
	len = other.size();
	if (len)
		arr = new T[len];
	for (unsigned int i = 0; i < len; i++)
		arr[i] = other[i];
}

template<typename T>
Array<T>::~Array()
{
	if (arr)
		delete[] arr;
}

template<typename T>
Array<T>&	Array<T>::operator=(const Array& other)
{
	if (this == &other)
		return (*this);
	if (arr)
		delete[] arr;
	len = other.size();
	arr = len ? new T[other.size()] : NULL;
	for (unsigned int i = 0; i < len; i++)
		arr[i] = other[i];
	return (*this);
}

template<typename T>
T&	Array<T>::operator[](unsigned int idx) const
{
	if (idx >= len)
		throw (OutofRangeException());
	return (arr[idx]);
}

template<typename T>
unsigned int Array<T>::size(void) const
{
	return (len);
}

template<typename T>
const char*	Array<T>::OutofRangeException::what(void) const throw()
{
	return "Exception: index is out of range";
}

#endif
