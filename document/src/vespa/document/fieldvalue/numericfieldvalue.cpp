// Copyright 2016 Yahoo Inc. Licensed under the terms of the Apache 2.0 license. See LICENSE in the project root.

#include "numericfieldvalue.h"

namespace document {

IMPLEMENT_IDENTIFIABLE_ABSTRACT(NumericFieldValueBase, FieldValue);

void
NumericFieldValueBase::printXml(XmlOutputStream& out) const
{
    out << XmlContent(getAsString());
}


} // document
