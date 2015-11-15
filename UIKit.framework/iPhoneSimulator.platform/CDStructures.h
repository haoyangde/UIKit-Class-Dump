//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSString, NSTimer, UIImage, UIView, UIWebPDFView, XPCMachSendRight, _UIViewServiceInterface, _UIViewServiceXPCProxy;

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CADoublePoint {
    double x;
    double y;
};

struct CATransform3D {
    float m11;
    float m12;
    float m13;
    float m14;
    float m21;
    float m22;
    float m23;
    float m24;
    float m31;
    float m32;
    float m33;
    float m34;
    float m41;
    float m42;
    float m43;
    float m44;
};

struct CGAffineTransform {
    float a;
    float b;
    float c;
    float d;
    float tx;
    float ty;
};

struct CGPoint {
    float x;
    float y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    float width;
    float height;
};

struct COWQueue<int> {
    unsigned int _field1;
    unsigned int _field2;
    struct SharedElements *_field3;
};

struct COWQueue<writing_point16_t> {
    unsigned int _field1;
    unsigned int _field2;
    struct SharedElements *_field3;
};

struct KBStrokeList {
    struct COWQueue<writing_point16_t> _field1;
    struct COWQueue<int> _field2;
    int _field3;
};

struct SharedElements;

struct UIEdgeInsets {
    float top;
    float left;
    float bottom;
    float right;
};

struct UIKeyAndScopeToValueCache {
    unsigned int previousScope;
    unsigned int previousKey;
    struct UINibDecoderValue *previousValue;
};

struct UIKeyToKeyIDCache {
    NSString *previousKey[64];
    void *previousKeyID[64];
    char previousKeyExists[64];
    int hashHits;
    int hashHotMisses;
    int hashColdMisses;
};

struct UINibArchiveTableInfo {
    unsigned int count;
    unsigned int offset;
};

struct UINibDecoderHeader {
    unsigned char type[10];
    unsigned int formatVersion;
    unsigned int coderVersion;
    struct UINibArchiveTableInfo objects;
    struct UINibArchiveTableInfo keys;
    struct UINibArchiveTableInfo values;
    struct UINibArchiveTableInfo classes;
};

struct UINibDecoderObjectEntry {
    unsigned int _field1;
    unsigned int _field2;
};

struct UINibDecoderRecursiveState {
    int objectID;
    int nextGenericKey;
    unsigned int nextValueSearchIndex;
    char replaced;
};

struct UINibDecoderValue {
    unsigned int _field1;
    unsigned int _field2;
};

struct UIOffset {
    float horizontal;
    float vertical;
};

struct UIPeripheralAnimationGeometry {
    struct CGPoint outPosition;
    struct CGPoint inPosition;
    struct CGRect bounds;
    struct CGAffineTransform transform;
    float targetFrameHeightDelta;
};

struct UISharedArtworkFileHeader {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3[0];
};

struct UIStringIDTableBucket {
    id _field1;
    unsigned int _field2;
    struct UIStringIDTableBucket *_field3;
};

struct UIWebDocumentViewViewportConfiguration {
    struct CGSize size;
    float initialScale;
    float minimumScale;
    float maximumScale;
    char allowsUserScaling;
};

struct WKView;

struct WKWindow {
    struct _WKObject _field1;
    id _field2;
    struct WKView *_field3;
    struct WKView *_field4;
    struct WKView *_field5;
};

struct _NSRange {
    unsigned int location;
    unsigned int length;
};

struct _PDFHistoryItem {
    char restorePending;
    char isInitialScale;
    float zoomScale;
    struct CGPoint contentOffset;
};

struct _WKClassInfo;

struct _WKObject {
    unsigned int _field1;
    struct _WKClassInfo *_field2;
};

#pragma mark Typedef'd Structures

typedef struct {
    id _field1;
    id _field2;
    char _field3;
    char _field4;
    unsigned long long _field5;
    int _field6;
} CDStruct_59875e80;

typedef struct {
    id _field1;
    id _field2;
    int _field3;
    id _field4;
    id _field5;
    int _field6;
} CDStruct_982099be;

typedef struct {
    UIWebPDFView *view;
    NSTimer *timer;
} CDStruct_d58a15aa;

typedef struct {
    id _field1;
    unsigned int _field2;
} CDStruct_421913e2;

typedef struct {
    id _field1;
    int _field2;
    int _field3;
} CDStruct_04eade4e;

typedef struct {
    char itemIsEnabled[24];
    char timeString[64];
    int gsmSignalStrengthRaw;
    int gsmSignalStrengthBars;
    char serviceString[100];
    char serviceCrossfadeString[100];
    char serviceImages[2][100];
    char operatorDirectory[1024];
    unsigned int serviceContentType;
    int wifiSignalStrengthRaw;
    int wifiSignalStrengthBars;
    unsigned int dataNetworkType;
    int batteryCapacity;
    unsigned int batteryState;
    char batteryDetailString[150];
    int bluetoothBatteryCapacity;
    int thermalColor;
    unsigned int thermalSunlightMode:1;
    unsigned int slowActivity:1;
    unsigned int syncActivity:1;
    char activityDisplayId[256];
    unsigned int bluetoothConnected:1;
    unsigned int displayRawGSMSignal:1;
    unsigned int displayRawWifiSignal:1;
    unsigned int locationIconType:1;
} CDStruct_24dca785;

typedef struct {
    char animateContentRotation;
    char preserveHeight;
    char avoidFadingBottomOfContent;
    char skipSnapshotOfEndState;
    float contentStretchRightEdgeInset;
    int edgeClip;
} CDStruct_19ba41f1;

typedef struct {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
} CDStruct_0be28830;

typedef struct {
    float _field1;
    float _field2;
    float _field3;
} CDStruct_869f9c67;

typedef struct {
    float _field1;
    float _field2;
} CDStruct_b2fbf00d;

typedef struct {
    float amount;
    int unit;
} CDStruct_d5a6e384;

typedef struct {
    int _field1;
    int _field2;
    id _field3;
    id _field4;
    float _field5;
    int _field6;
    SEL _field7;
    id _field8;
} CDStruct_dbaf35c5;

typedef struct {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
    char _field5;
    char _field6;
} CDStruct_03799eb3;

typedef struct {
    id _field1;
    id _field2;
    id _field3;
    id _field4;
    id _field5;
    struct CGSize _field6;
} CDStruct_8f44d8bf;

typedef struct {
    id _field1;
    unsigned int _field2;
    char _field3;
    union {
        float _field1;
        double _field2;
        unsigned long long _field3;
        void *_field4;
    } _field4;
    unsigned int _field5;
} CDStruct_ee93799b;

typedef struct {
    char overrideItemIsEnabled[24];
    unsigned int overrideTimeString:1;
    unsigned int overrideGsmSignalStrengthRaw:1;
    unsigned int overrideGsmSignalStrengthBars:1;
    unsigned int overrideServiceString:1;
    unsigned int overrideServiceImages:2;
    unsigned int overrideOperatorDirectory:1;
    unsigned int overrideServiceContentType:1;
    unsigned int overrideWifiSignalStrengthRaw:1;
    unsigned int overrideWifiSignalStrengthBars:1;
    unsigned int overrideDataNetworkType:1;
    unsigned int disallowsCellularDataNetworkTypes:1;
    unsigned int overrideBatteryCapacity:1;
    unsigned int overrideBatteryState:1;
    unsigned int overrideBatteryDetailString:1;
    unsigned int overrideBluetoothBatteryCapacity:1;
    unsigned int overrideThermalColor:1;
    unsigned int overrideSlowActivity:1;
    unsigned int overrideActivityDisplayId:1;
    unsigned int overrideBluetoothConnected:1;
    unsigned int overrideDisplayRawGSMSignal:1;
    unsigned int overrideDisplayRawWifiSignal:1;
    CDStruct_24dca785 values;
} CDStruct_3d5224b0;

typedef struct {
    CDStruct_d5a6e384 _field1[4];
} CDStruct_14b8080e;

typedef struct {
    int _field1;
    struct CGSize _field2;
} CDStruct_9b4cf30b;

typedef struct {
    _UIViewServiceInterface *interface;
    _UIViewServiceXPCProxy *viewControllerOperatorProxy;
    _UIViewServiceXPCProxy *serviceViewControllerProxy;
    _UIViewServiceXPCProxy *textEffectsOperatorProxy;
    unsigned int hostedWindowContextID;
    NSArray *serviceViewControllerSupportedInterfaceOrientations;
    XPCMachSendRight *serviceAccessibilityServerPortWrapper;
    struct CGAffineTransform serviceRootLayerTransform;
    struct CGRect serviceRootLayerFrame;
    struct CGAffineTransform textEffectsRootLayerTransform;
    struct CGRect textEffectsRootLayerFrame;
    unsigned int textEffectsWindowContextID;
    unsigned int textEffectsWindowAboveStatusBarContextID;
} CDStruct_5a8e6190;

typedef struct {
    id _field1;
    float _field2;
    float _field3;
    CDStruct_8f44d8bf _field4;
    CDStruct_8f44d8bf _field5;
    CDStruct_8f44d8bf _field6;
    CDStruct_8f44d8bf _field7;
    char _field8;
} CDStruct_a542d031;

typedef struct {
    struct CGRect left;
    struct CGRect middle;
    struct CGRect right;
} CDStruct_75b8db5d;

typedef struct {
    CDStruct_75b8db5d top;
    CDStruct_75b8db5d middle;
    CDStruct_75b8db5d bottom;
} CDStruct_c8cd2c5d;

#pragma mark Typedef'd Unions

typedef union {
    UIImage *image;
    UIView *view;
} CDUnion_b710d1cf;

