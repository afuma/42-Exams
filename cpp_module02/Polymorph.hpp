/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesaint <edesaint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 16:45:30 by edesaint          #+#    #+#             */
/*   Updated: 2024/09/15 17:24:04 by edesaint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __POLYMORPH__
#define __POLYMORPH__

#include <string>
#include <iostream>
#include "ASpell.hpp"

class Polymorph: public ASpell
{
    public:
        Polymorph();
        ~Polymorph();
    
        virtual ASpell* clone() const;
};

#endif