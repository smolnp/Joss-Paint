/*
MIT License

Copyright (c) 2020 Maifee Ul Asad

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

GitHub repo : https://github.com/maifeeulasad/Paint

A copy of the License : https://github.com/maifeeulasad/Paint/blob/main/LICENSE
*/

#ifndef GAUSSIANBLUREFFECT_H
#define GAUSSIANBLUREFFECT_H

#include "effectwithsettings.h"
#include "../widgets/gaussianblurfiltersettings.h"

#include <QtCore/QObject>

/**
 * @brief Gaussian Blur effect class.
 *
 */
class GaussianBlurEffect : public EffectWithSettings
{
    Q_OBJECT
public:
    explicit GaussianBlurEffect(QObject *parent = 0) : EffectWithSettings(parent) {}
    
protected:
    // TODO: change type of widget
    virtual AbstractEffectSettings *getSettingsWidget() { return new GaussianBlurFilterSettings(); }
    
};

#endif // GAUSSIANBLUREFFECT_H
