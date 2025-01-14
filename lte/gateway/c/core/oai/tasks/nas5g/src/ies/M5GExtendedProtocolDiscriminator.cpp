/*
   Copyright 2020 The Magma Authors.
   This source code is licensed under the BSD-style license found in the
   LICENSE file in the root directory of this source tree.
   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
 */

#include <sstream>
#include <cstdint>
#include "M5GExtendedProtocolDiscriminator.h"
#include "M5GCommonDefs.h"

namespace magma5g {
ExtendedProtocolDiscriminatorMsg::ExtendedProtocolDiscriminatorMsg(){};
ExtendedProtocolDiscriminatorMsg::~ExtendedProtocolDiscriminatorMsg(){};

// Decode ExtendedProtocolDiscriminator IE
int ExtendedProtocolDiscriminatorMsg::DecodeExtendedProtocolDiscriminatorMsg(
    ExtendedProtocolDiscriminatorMsg* extended_protocol_discriminator,
    uint8_t iei, uint8_t* buffer, uint32_t len) {
  uint8_t decoded = 0;

  MLOG(MDEBUG) << "   DecodeExtendedProtocolDiscriminatorMsg : ";
  extended_protocol_discriminator->extended_proto_discriminator =
      *(buffer + decoded);
  decoded++;
  MLOG(MDEBUG)
      << " epd = " << std::hex
      << int(extended_protocol_discriminator->extended_proto_discriminator);
  return (decoded);
};

// Encode ExtendedProtocolDiscriminator IE
int ExtendedProtocolDiscriminatorMsg::EncodeExtendedProtocolDiscriminatorMsg(
    ExtendedProtocolDiscriminatorMsg* extended_protocol_discriminator,
    uint8_t iei, uint8_t* buffer, uint32_t len) {
  int encoded = 0;

  MLOG(MDEBUG) << " EncodeExtendedProtocolDiscriminatorMsg : ";
  *(buffer + encoded) =
      extended_protocol_discriminator->extended_proto_discriminator;
  MLOG(MDEBUG) << "epd = 0x" << std::hex << int(*(buffer + encoded));
  encoded++;
  return (encoded);
};
}  // namespace magma5g
