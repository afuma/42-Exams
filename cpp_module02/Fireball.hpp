/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesaint <edesaint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 16:45:30 by edesaint          #+#    #+#             */
/*   Updated: 2024/09/15 17:24:04 by edesaint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __Fireball__
#define __Fireball__

#include <string>
#include <iostream>
#include "ASpell.hpp"

class Fireball: public ASpell
{
    public:
        Fireball();
        ~Fireball();
    
        virtual ASpell* clone() const;
};

#endif