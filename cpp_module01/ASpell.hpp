/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesaint <edesaint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 16:45:30 by edesaint          #+#    #+#             */
/*   Updated: 2024/09/15 17:24:04 by edesaint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ASPELL__
#define __ASPELL__

#include <string>
#include <iostream>

class ATarget;

class ASpell
{
    public:
        ASpell(const std::string &name, const std::string &effects);
        virtual ~ASpell();
        ASpell(const ASpell& other);
        ASpell& operator=(const ASpell& other);
        virtual ASpell* clone() const = 0;
        
        const std::string& getName() const;
        const std::string& getEffects() const;
        void launch(const ATarget& atarget) const;

    protected:
        std::string name;
        std::string effects;
};

#endif