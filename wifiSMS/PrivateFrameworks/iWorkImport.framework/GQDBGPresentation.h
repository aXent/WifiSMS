/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */



@interface GQDBGPresentation : GQDRoot 
{
    struct __CFArray { } *mThemes;
    struct CGSize { 
        float width; 
        float height; 
    } mSlideSize;
    BOOL mIsOldAssetNameMapInitialized;
    struct __CFDictionary { } *mOldAssetNameMap;
}

+ (void)initialize;
+ (struct _xmlNs { struct _xmlNs {} *x1; NSInteger x2; char *x3; char *x4; void *x5; struct _xmlDoc {} *x6; }*)appNamespace;
+ (id)parseNumberOutOfBasename:(id)arg1 returningNumber:(NSInteger*)arg2;

- (id)init;
- (void)dealloc;
- (struct __CFArray { }*)themes;
- (void)addTheme:(id)arg1;
- (struct CGSize { float x1; float x2; })slideSize;
- (void)loadAppBundleResourceToColorMap;
- (id)colorForMissingAppBundleResource:(struct __CFString { }*)arg1 processorBundle:(struct __CFBundle { }*)arg2;
- (struct __CFURL { }*)createUrlToAppBundleResource:(struct __CFString { }*)arg1 processorBundle:(struct __CFBundle { }*)arg2;
- (void)initializeAppBundleResourcesUrl;
- (struct __CFString { }*)createUpgradedAppBundleResourcePath:(struct __CFString { }*)arg1 processorBundle:(struct __CFBundle { }*)arg2;

@end
