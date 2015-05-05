/*
* Copyright (C) 2015 CossackLabs
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#include <themis/themis.h>

#ifndef _SECURE_CELL_H_
#define _SECURE_CELL_H_

themis_status_t themis_secure_cell_encrypt_full(const uint8_t* master_key,
						const size_t master_key_length,
						const uint8_t* user_context,
						const size_t user_context_length,
						const uint8_t* message,
						const size_t message_length,
						uint8_t* encrypted_message,
						size_t* encrypted_message_length);

themis_status_t themis_secure_cell_decrypt_full(const uint8_t* master_key,
						const size_t master_key_length,
						const uint8_t* user_context,
						const size_t user_context_length,
						const uint8_t* encrypted_message,
						const size_t encrypted_message_length,
						uint8_t* plain_message,
						size_t* plain_message_length);

themis_status_t themis_secure_cell_encrypt_auto_split(const uint8_t* master_key,
						      const size_t master_key_length,
						      const uint8_t* user_context,
						      const size_t user_context_length,
						      const uint8_t* message,
						      const size_t message_length,
						      uint8_t* context,
						      size_t* context_length,
						      uint8_t* encrypted_message,
						      size_t* encrypted_message_length);

themis_status_t themis_secure_cell_decrypt_auto_split(const uint8_t* master_key,
						      const size_t master_key_length,
						      const uint8_t* user_context,
						      const size_t user_context_length,
						      const uint8_t* encrypted_message,
						      const size_t encrypted_message_length,
						      const uint8_t* context,
						      const size_t context_length,
						      uint8_t* plain_message,
						      size_t* plain_message_length);

themis_status_t themis_secure_cell_encrypt_user_split(const uint8_t* master_key,
						      const size_t master_key_length,
						      const uint8_t* message,
						      const size_t message_length,
						      const uint8_t* context,
						      const size_t context_length,
						      uint8_t* encrypted_message,
						      size_t* encrypted_message_length);

themis_status_t themis_secure_cell_decrypt_user_split(const uint8_t* master_key,
						      const size_t master_key_length,
						      const uint8_t* encrypted_message,
						      const size_t encrypted_message_length,
						      const uint8_t* context,
						      const size_t context_length,
						      uint8_t* plain_message,
						      size_t* plain_message_length);

#endif /* _SECURE_CELL_H_ */
















