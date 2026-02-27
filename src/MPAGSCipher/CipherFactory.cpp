#include "CipherFactory.hpp"

#include "CaesarCipher.hpp"
#include "PlayfairCipher.hpp"
#include "VigenereCipher.hpp"

#include "CipherType.hpp"

#include <stdexcept>

std::unique_ptr<Cipher> CipherFactory::createCipher(CipherType type, std::string _key) {
    switch (type) {
        case CipherType::Caesar:
            return std::make_unique<CaesarCipher>(_key);
        case CipherType::Playfair:
            return std::make_unique<PlayfairCipher>(_key);
        case CipherType::Vigenere:
            return std::make_unique<VigenereCipher>(_key);
    }
    return nullptr;
}
