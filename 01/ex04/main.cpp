/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 21:05:20 by johokyoun         #+#    #+#             */
/*   Updated: 2022/01/09 22:33:30 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char* argv[])
{
    if (argc != 4)
    {
        std::cout << "Error." << std::endl;
        return (1);
    }
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::string newline;
    std::string oldline;
    std::ifstream in(filename.data());
    int start = 0;
    int index = 0;
// ifstream 객체의 소멸자에서 close까지 해준다. 같은 객체가 새로운 파일의 입력을 받기 위해서는 close를 해줘야한다.
    if (in.is_open())
    {
        std::ofstream out(filename.append(".replace").data());
        if (!out.is_open())
        {
            in.close();
            std::cout << "Error : file open." << std::endl;
            return (1);
        }
        while (!in.eof())
        {
            getline(in, oldline);
            newline = oldline;
            start = 0;
            index = 0;
            while ((index = oldline.find(s1, start)) != -1)
            {
                newline.erase(index, s1.length());
                newline.insert(index, s2);
                start = index + s1.length();
            }
            out << newline;
            if (in.eof())
                break ;
            out << std::endl;
        }
        out.close();
        in.close();
    }
    else
    {
        std::cout << "Error : file does not exist." << std::endl;
        return (1);
    }
    return (0);
}