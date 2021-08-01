/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 21:11:16 by skim              #+#    #+#             */
/*   Updated: 2021/08/01 19:25:51 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template<typename T>
class Array{
	private:
		T *arr;
		unsigned int size;
	public:
		Array() {};
		Array(unsigned int n) {
			arr = new T[n];
			size = n;
		}
		Array(Array<T> const & rhs) { this->operator=(rhs); }
		~Array() {
			delete[] arr;
		};

		Array	&operator=( Array const &rhs ) {
			if (this->size > 0)
			{
				delete[] arr;
				arr = new T[rhs.size];
			}
			size = rhs.size;
			for (unsigned int i = 0; i < rhs.size; i++)
				this->arr[i] = rhs.arr[i];
			return (*this);
		}

		T	&operator[]( unsigned int index ) {
			if (index >= size)
				throw OutIndexException();
			return arr[index];
		}

		class		OutIndexException : public std::exception
		{
			public:
				virtual const char *what() const throw() {
					return ("wrong index");
				}
		};
};

#endif
