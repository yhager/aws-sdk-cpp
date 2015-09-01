/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/s3/model/Type.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int CanonicalUser_HASH = HashingUtils::HashString("CanonicalUser");
static const int AmazonCustomerByEmail_HASH = HashingUtils::HashString("AmazonCustomerByEmail");
static const int Group_HASH = HashingUtils::HashString("Group");

namespace Aws
{
namespace S3
{
namespace Model
{
namespace TypeMapper
{
Type GetTypeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == CanonicalUser_HASH)
  {
    return Type::CanonicalUser;
  }
  else if (hashCode == AmazonCustomerByEmail_HASH)
  {
    return Type::AmazonCustomerByEmail;
  }
  else if (hashCode == Group_HASH)
  {
    return Type::Group;
  }

  return Type::NOT_SET;
}

Aws::String GetNameForType(Type value)
{
  switch(value)
  {
  case Type::CanonicalUser:
    return "CanonicalUser";
  case Type::AmazonCustomerByEmail:
    return "AmazonCustomerByEmail";
  case Type::Group:
    return "Group";
  default:
    return "";
  }
}

} // namespace TypeMapper
} // namespace Model
} // namespace S3
} // namespace Aws