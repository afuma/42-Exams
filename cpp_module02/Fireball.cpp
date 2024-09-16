/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesaint <edesaint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 16:50:45 by edesaint          #+#    #+#             */
/*   Updated: 2024/09/15 17:26:25 by edesaint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fireball.hpp"
#include "ASpell.hpp"

Fireball::Fireball(): ASpell("Fireball", "burnt to a crisp") {}

Fireball::~Fireball() {}

ASpell* Fireball::clone() const
{
    return new Fireball(*this);
}