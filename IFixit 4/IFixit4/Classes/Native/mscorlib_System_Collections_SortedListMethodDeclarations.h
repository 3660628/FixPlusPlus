﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.SortedList
struct SortedList_t1149;
// System.Collections.IComparer
struct IComparer_t997;
// System.Collections.IDictionary
struct IDictionary_t945;
// System.Collections.IEnumerator
struct IEnumerator_t80;
// System.Object
struct Object_t;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t956;
// System.Array
struct Array_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.SortedList::.ctor()
extern "C" void SortedList__ctor_m7749 (SortedList_t1149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::.ctor(System.Int32)
extern "C" void SortedList__ctor_m6053 (SortedList_t1149 * __this, int32_t ___initialCapacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::.ctor(System.Collections.IComparer,System.Int32)
extern "C" void SortedList__ctor_m7750 (SortedList_t1149 * __this, Object_t * ___comparer, int32_t ___capacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::.ctor(System.Collections.IDictionary,System.Collections.IComparer)
extern "C" void SortedList__ctor_m7751 (SortedList_t1149 * __this, Object_t * ___d, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::.cctor()
extern "C" void SortedList__cctor_m7752 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.SortedList::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * SortedList_System_Collections_IEnumerable_GetEnumerator_m7753 (SortedList_t1149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList::get_Count()
extern "C" int32_t SortedList_get_Count_m7754 (SortedList_t1149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList::get_SyncRoot()
extern "C" Object_t * SortedList_get_SyncRoot_m7755 (SortedList_t1149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList::get_IsFixedSize()
extern "C" bool SortedList_get_IsFixedSize_m7756 (SortedList_t1149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList::get_IsReadOnly()
extern "C" bool SortedList_get_IsReadOnly_m7757 (SortedList_t1149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList::get_Item(System.Object)
extern "C" Object_t * SortedList_get_Item_m7758 (SortedList_t1149 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::set_Item(System.Object,System.Object)
extern "C" void SortedList_set_Item_m7759 (SortedList_t1149 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList::get_Capacity()
extern "C" int32_t SortedList_get_Capacity_m7760 (SortedList_t1149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::set_Capacity(System.Int32)
extern "C" void SortedList_set_Capacity_m7761 (SortedList_t1149 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::Add(System.Object,System.Object)
extern "C" void SortedList_Add_m7762 (SortedList_t1149 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList::Contains(System.Object)
extern "C" bool SortedList_Contains_m7763 (SortedList_t1149 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.SortedList::GetEnumerator()
extern "C" Object_t * SortedList_GetEnumerator_m7764 (SortedList_t1149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::Remove(System.Object)
extern "C" void SortedList_Remove_m7765 (SortedList_t1149 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::CopyTo(System.Array,System.Int32)
extern "C" void SortedList_CopyTo_m7766 (SortedList_t1149 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList::Clone()
extern "C" Object_t * SortedList_Clone_m7767 (SortedList_t1149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::RemoveAt(System.Int32)
extern "C" void SortedList_RemoveAt_m7768 (SortedList_t1149 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList::IndexOfKey(System.Object)
extern "C" int32_t SortedList_IndexOfKey_m7769 (SortedList_t1149 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList::ContainsKey(System.Object)
extern "C" bool SortedList_ContainsKey_m7770 (SortedList_t1149 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList::GetByIndex(System.Int32)
extern "C" Object_t * SortedList_GetByIndex_m7771 (SortedList_t1149 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::EnsureCapacity(System.Int32,System.Int32)
extern "C" void SortedList_EnsureCapacity_m7772 (SortedList_t1149 * __this, int32_t ___n, int32_t ___free, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::PutImpl(System.Object,System.Object,System.Boolean)
extern "C" void SortedList_PutImpl_m7773 (SortedList_t1149 * __this, Object_t * ___key, Object_t * ___value, bool ___overwrite, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList::GetImpl(System.Object)
extern "C" Object_t * SortedList_GetImpl_m7774 (SortedList_t1149 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::InitTable(System.Int32,System.Boolean)
extern "C" void SortedList_InitTable_m7775 (SortedList_t1149 * __this, int32_t ___capacity, bool ___forceSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList::Find(System.Object)
extern "C" int32_t SortedList_Find_m7776 (SortedList_t1149 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
