#pragma once

#include <ext/shared_ptr_helper.h>
#include <Storages/System/IStorageSystemOneBlock.h>

namespace DB
{

class StorageSystemDataTypeFamilies : public ext::shared_ptr_helper<StorageSystemDataTypeFamilies>,
                                      public IStorageSystemOneBlock<StorageSystemDataTypeFamilies>
{
protected:
    void fillData(MutableColumns & res_columns, const Context & context, const SelectQueryInfo & query_info) const override;

    using IStorageSystemOneBlock::IStorageSystemOneBlock;

public:
    std::string getName() const override { return "SystemTableDataTypeFamilies"; }

    static NamesAndTypesList getNamesAndTypes();
};

}
