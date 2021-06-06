#ifndef D0261D60_2442_4739_9452_327AC8E046C8
#define D0261D60_2442_4739_9452_327AC8E046C8

#include <openssl/evp.h>
#include <map>
#include <cstring>
namespace sieve
{
    namespace crypto
    {
        class AES
        {
        private:
            EVP_MD_CTX* buffer_;
            unsigned char* ciphertext_;
            size_t ciphertext_len;
            unsigned char* key_;
            unsigned char* iv_;
            size_t iv_len_;
            std::map<int,const EVP_CIPHER*>* ciphers;
        public:
            explicit AES();
            virtual void update(const std::string&)=0;
            virtual void update(const unsigned char *,size_t)=0;
            unsigned char* get_ciphertext();
            virtual ~AES();
        };
        
    } // namespace crypto
    
} // namespace sieve


#endif /* D0261D60_2442_4739_9452_327AC8E046C8 */
