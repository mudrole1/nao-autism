/****************************************************************************
** Meta object code from reading C++ file 'BehaviorTab.h'
**
** Created: Thu Aug 8 12:57:51 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "BehaviorTab.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BehaviorTab.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BehaviorTab[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_BehaviorTab[] = {
    "BehaviorTab\0\0onCreateBehaviorBtnClicked()\0"
};

void BehaviorTab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BehaviorTab *_t = static_cast<BehaviorTab *>(_o);
        switch (_id) {
        case 0: _t->onCreateBehaviorBtnClicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData BehaviorTab::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BehaviorTab::staticMetaObject = {
    { &QTabWidget::staticMetaObject, qt_meta_stringdata_BehaviorTab,
      qt_meta_data_BehaviorTab, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BehaviorTab::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BehaviorTab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BehaviorTab::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BehaviorTab))
        return static_cast<void*>(const_cast< BehaviorTab*>(this));
    return QTabWidget::qt_metacast(_clname);
}

int BehaviorTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
