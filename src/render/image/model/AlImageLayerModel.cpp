/*
* Copyright (c) 2018-present, aliminabc@gmail.com.
*
* This source code is licensed under the MIT license found in the
* LICENSE file in the root directory of this source tree.
*/

#include "AlImageLayerModel.h"

AlImageLayerModel *AlImageLayerModel::create(AlIdentityCreator *creator, const std::string path) {
    return new AlImageLayerModel(creator->generate(), path);
}

AlImageLayerModel::AlImageLayerModel(int32_t id, const std::string &path)
        : Object(),
          path(path),
          id(id),
          alpha(1.0f),
          rotation(0.0f),
          position(AlVec2(0.0f, 0.0f)),
          scale(AlVec2(1.0f, 1.0f)) {

}

AlImageLayerModel::AlImageLayerModel(const AlImageLayerModel &o)
        : Object(),
          id(o.id),
          path(o.path),
          alpha(o.alpha),
          rotation(o.rotation),
          position(o.position),
          scale(o.scale) {

}

AlImageLayerModel::~AlImageLayerModel() {

}

std::string AlImageLayerModel::getPath() {
    return path;
}

int32_t AlImageLayerModel::getId() {
    return id;
}

void AlImageLayerModel::setAlpha(float alpha) {
    this->alpha = alpha;
}

float AlImageLayerModel::getAlpha() {
    return alpha;
}

void AlImageLayerModel::setScale(float scaleX, float scaleY) {
    scale.x = scaleX;
    scale.y = scaleY;
}

AlVec2 AlImageLayerModel::getScale() {
    return scale;
}

void AlImageLayerModel::setRotation(float rotation) {
    this->rotation = rotation;
}

float AlImageLayerModel::getRotation() {
    return rotation;
}

void AlImageLayerModel::setPosition(float x, float y) {
    position.x = x;
    position.y = y;
}

AlVec2 AlImageLayerModel::getPosition() {
    return position;
}
