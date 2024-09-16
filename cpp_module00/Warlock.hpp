/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesaint <edesaint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 16:45:30 by edesaint          #+#    #+#             */
/*   Updated: 2024/09/15 17:24:04 by edesaint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WARLOCK__
#define __WARLOCK__

#include <string>
#include <iostream>

class Warlock
{
    public:
        Warlock(const std::string &name, const std::string &title);
        ~Warlock();
        Warlock(const Warlock& other);
        Warlock& operator=(const Warlock& other);
        void introduce() const;
        
        const std::string& getName() const;
        const std::string& getTitle() const;
        void setTitle(const std::string &title);

    private:
        Warlock();
        std::string name;
        std::string title;
};

#endif