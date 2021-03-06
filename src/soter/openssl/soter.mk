#
# Copyright (c) 2015 Cossack Labs Limited
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

CRYPTO_ENGINE_SOURCES += $(wildcard $(CRYPTO_ENGINE)/*.c)
CRYPTO_ENGINE_HEADERS += $(wildcard $(CRYPTO_ENGINE)/*.h)

# Put path to your OpenSSL/LibreSSL here
OPENSSL_DIR = libs/librebin

ifneq ($(CRYPTO_ENGINE_INCLUDE_PATH),)
	CRYPTO_ENGINE_CFLAGS += -I$(CRYPTO_ENGINE_INCLUDE_PATH)
endif
ifneq ($(CRYPTO_ENGINE_LIB_PATH),)
	CRYPTO_ENGINE_LDFLAGS += -L$(CRYPTO_ENGINE_LIB_PATH)
endif
CRYPTO_ENGINE_LDFLAGS += -lcrypto

CFLAGS += $(CRYPTO_ENGINE_CFLAGS)
LDFLAGS += $(CRYPTO_ENGINE_LDFLAGS)
