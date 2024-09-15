/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesaint <edesaint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 16:50:45 by edesaint          #+#    #+#             */
/*   Updated: 2024/09/15 17:26:25 by edesaint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fwoosh.hpp"
#include "ASpell.hpp"

Fwoosh::Fwoosh(): ASpell("Fwoosh", "fwooshed") {}

Fwoosh::~Fwoosh() {}

ASpell* Fwoosh::clone() const
{
    return new Fwoosh(*this);
}