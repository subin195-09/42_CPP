/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 15:57:28 by skim              #+#    #+#             */
/*   Updated: 2021/08/19 16:39:52 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("shrubberry", 145,137)
{
	target = "none";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target)
: Form("shrubbery", 145,137), target(_target) {}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src )
: Form("shrubberry", 145,137)
{
	this->operator=(src);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	if ( this != &rhs )
	{
		this->sign = rhs.getSign();
	}
	return *this;
}

const char* ShrubberyCreationForm::FileOpenException::what() const throw()
{
	return ("Shrubberry : File Open Error");
}

void					ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (sign == false)
		throw Form::UnsignedForm();
	else if (executor.getGrade() > this->exeGrade)
		throw Form::GradeTooLowException();
	else
	{
		std::ofstream fo(target + "_shrubbery");
		if (!fo.is_open() || fo.bad())
			throw FileOpenException();

		fo << "              _{\\ _{\\{\\/}/}/}__" << std::endl;
		fo << "             {/{/\\}{/{/\\}(\\}{/\\} _" << std::endl;
		fo << "            {/{/\\}{/{/\\}(_)\\}{/{/\\}  _" << std::endl;
		fo << "         {\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\}" << std::endl;
		fo << "        {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/}" << std::endl;
		fo << "       _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}" << std::endl;
		fo << "      {/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\}" << std::endl;
		fo << "      _{\\{/{\\{/(_)\\}/}{/{/{/\\}\\})\\}{/\\}" << std::endl;
		fo << "     {/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}" << std::endl;
		fo << "      {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/}" << std::endl;
		fo << "       {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_)" << std::endl;
		fo << "      {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/}" << std::endl;
		fo << "       {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}" << std::endl;
		fo << "         {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}" << std::endl;
		fo << "          (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)" << std::endl;
		fo << "            {/{/{\\{\\/}{/{\\{\\{\\(_)/}" << std::endl;
		fo << "             {/{\\{\\{\\/}/}{\\{\\\\}/}" << std::endl;
		fo << "              {){/ {\\/}{\\/} \\}\\}" << std::endl;
		fo << "              (_)  \\.-'.-/" << std::endl;
		fo << "          __...--- |'-.-'| --...__" << std::endl;
		fo << "   _...--.   .-'   |'-.-'|  ' -.  ..--..__" << std::endl;
		fo << " -.    ' .  . '    |.'-._| '  . .  '   jro" << std::endl;
		fo << " .  '-  '    .--'  | '-.'|    .  '  . '" << std::endl;
		fo << "          ' ..     |'-_.-|" << std::endl;
		fo << "  .  '  .       _.-|-._ -|-._  .  '  ." << std::endl;
		fo << "              .'   |'- .-|   '." << std::endl;
		fo << "  ..-'   ' .  '.   `-._.-???   .'  '  - ." << std::endl;
		fo << "   .-' '        '-._______.-'     '  ." << std::endl;
		fo << "        .      ~," << std::endl;

		fo.close();
	}
}
