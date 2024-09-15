/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesaint <edesaint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 16:45:30 by edesaint          #+#    #+#             */
/*   Updated: 2024/09/15 19:13:07 by edesaint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WARLOCK__
#define __WARLOCK__

#include <iostream>
#include <map>
#include "ASpell.hpp"

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

	void learnSpell(ASpell* spell);
	void forgetSpell(std::string SpellName);
	void launchSpell(std::string SpellName, ATarget const & target);

    private:
        std::map < std::string, ASpell * > _SpellBook;
        std::string name;
        std::string title;
};

#endif
