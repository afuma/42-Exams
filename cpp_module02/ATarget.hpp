/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesaint <edesaint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 16:45:30 by edesaint          #+#    #+#             */
/*   Updated: 2024/09/16 15:31:23 by edesaint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ATARGET__
#define __ATARGET__

#include <string>
#include <iostream>

#include "ASpell.hpp"

class ATarget
{
    public:
        ATarget(const std::string &type);
        virtual ~ATarget();
        ATarget(const ATarget& other);
        ATarget& operator=(const ATarget& other);
        virtual ATarget* clone() const = 0;
        
        const std::string& getType() const;
        void getHitBySpell(const ASpell& aspell) const;

    protected:
        std::string type;
};

#endif