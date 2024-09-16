/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesaint <edesaint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 16:50:45 by edesaint          #+#    #+#             */
/*   Updated: 2024/09/15 17:26:25 by edesaint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorph.hpp"
#include "ASpell.hpp"

Polymorph::Polymorph(): ASpell("Polymorph", "turned into a critter") {}

Polymorph::~Polymorph() {}

ASpell* Polymorph::clone() const
{
    return new Polymorph(*this);
}