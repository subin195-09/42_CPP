/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 21:11:16 by skim              #+#    #+#             */
/*   Updated: 2021/08/21 17:41:48 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template<typename T>
class Array{
	private:
		T *arr;
		unsigned int len;
	public:
		Array() {
			arr = new T[0];
			len = 0;
		}

		Array(unsigned int n) {
			arr = new T[n];
			len = n;
		}

		Array(Array<T> const & rhs) {
			arr = new T[rhs.len];
			len = rhs.len;
			for (unsigned int i = 0; i < len; i++)
				arr[i] = rhs.arr[i];
		}

		Array	&operator=( Array const &rhs ) {
			delete[] arr;

			arr = new T[rhs.len];
			len = rhs.len;

			for (unsigned int i = 0; i < rhs.len; i++)
				this->arr[i] = rhs.arr[i];
			return (*this);
		}

		T	&operator[]( unsigned int index ) {
			if (index >= len)
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

		unsigned int	size() const{
			return len;
		}

		~Array() {
			delete[] arr;
		}
};

#endif
