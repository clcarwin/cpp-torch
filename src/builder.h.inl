#pragma once
#include "../include/builder.h"
#include "reader.h"


template<typename T>
cpptorch::Tensor<T, GPU_None> cpptorch::read_tensor(const cpptorch::object *obj)
{
    object_reader<T, GPU_None> mb;
    return mb.build_tensor(obj);
}

template<typename T>
std::shared_ptr<cpptorch::nn::Layer<T, GPU_None>> cpptorch::read_net(const cpptorch::object *obj)
{
    object_reader<T, GPU_None> mb;
    return std::static_pointer_cast<cpptorch::nn::Layer<T, GPU_None>>(mb.build_layer(obj));
}
