// Copyright (c) 2018 Chris Ohk, Youngjoong Kim, SeungHyun Jeon

// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#ifndef HEARTHSTONEPP_DECK_HPP
#define HEARTHSTONEPP_DECK_HPP

#include <hspp/Cards/Card.hpp>
#include <hspp/Enums/CardEnums.hpp>

#include <string>

namespace Hearthstonepp
{
//!
//! \brief Deck class.
//!
//! This class stores a deck. A deck is a collection of exactly 30 cards
//! assembled before a match, as well as the zone which players draw cards from
//! (and sometimes add cards to) during game play. Each deck is tied to a
//! specific class.
//!
class Deck
{
 public:
    //! Default constructor.
    Deck();

    //! Constructs deck with given \p name and \p deckClass.
    //! \param name The name of deck.
    //! \param deckClass The class of deck.
    Deck(std::string name, CardClass deckClass);

    //! Returns the name of deck.
    //! \return The name of deck.
    std::string GetName() const;

    //! Returns the class of deck.
    //! \return The class of deck.
    CardClass GetClass() const;

    //! Returns the number of cards in deck.
    //! \return The number of cards in deck.
    size_t GetNumOfCards() const;

    //! Returns the unique number of cards in deck.
    //! \return The unique number of cards in deck.
    size_t GetUniqueNumOfCards() const;

    //! Returns the number of cards in deck that matches \p cardID.
    //! \param cardID The ID of the card.
    //! \return The number of cards in deck that matches \p cardID.
    size_t GetNumCardInDeck(std::string cardID);

    //! Creates a deck from a list of pointers to cards to play game.
    //! \return A deck from a list of pointers to cards.
    std::vector<Card> GetPrimitiveDeck() const;

    //! Returns card ID and the number of card at \p idx in deck.
    //! \param idx Index of cards in deck.
    //! \return card ID and the number of card at \p idx in deck.
    std::pair<std::string, size_t> GetCard(size_t idx) const;

    //! Prints card list in deck.
    void ShowCardList() const;

    //! Add card(s) to deck with given \p cardID and \p numCardToAdd.
    //! \param cardID The ID of the card to add to deck.
    //! \param numCardToAdd The number of card to add to deck.
    //! \return true if card(s) is added to deck successfully, and false
    //! otherwise.
    bool AddCard(std::string cardID, size_t numCardToAdd);

    //! Delete card(s) from deck with given \p cardID and \p numCardToDelete.
    //! \param cardID The ID of the card to delete from deck.
    //! \param numCardToDelete The number of card to delete from deck.
    //! \return true if card(s) is deleted from deck successfully, and false
    //! otherwise.
    bool DeleteCard(std::string cardID, size_t numCardToDelete);

 private:
    std::string m_name;
    CardClass m_class = CardClass::INVALID;

    size_t m_numOfCards = 0;
    std::vector<std::pair<std::string, size_t>> m_cards;
};
}  // namespace Hearthstonepp

#endif  // HEARTHSTONEPP_DECK_HPP