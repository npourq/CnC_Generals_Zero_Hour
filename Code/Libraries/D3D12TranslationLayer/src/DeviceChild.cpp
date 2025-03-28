// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.
#include "pch.h"

namespace D3D12TranslationLayer
{
    void DeviceChild::AddToDeferredDeletionQueue(ID3D12Object* pObject)
    {
        m_pParent->AddObjectToDeferredDeletionQueue(pObject, m_LastUsedCommandListID, m_bWaitForCompletionRequired);
    }

    UINT64 DeviceChild::GetCommandListID(COMMAND_LIST_TYPE CommandListType) noexcept
    {
        return m_pParent->GetCommandListID(CommandListType);
    }

    void BatchedDeviceChild::ProcessBatch()
    {
        m_Parent.ProcessBatch();
    }
};