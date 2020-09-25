// Copyright 2018 H-AXE
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#if __GNUC__ >= 8
#include <string_view>
#else
#include <experimental/string_view>
#endif

namespace axe {
namespace common {

#if __GNUC__ >= 8
using string_view = std::string_view;
#else
using string_view = std::experimental::string_view;
#endif

}  // namespace common
}  // namespace axe
