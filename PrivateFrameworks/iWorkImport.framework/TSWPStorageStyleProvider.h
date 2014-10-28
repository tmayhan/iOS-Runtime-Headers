/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSString;

@interface TSWPStorageStyleProvider : NSObject <TSWPStyleProvider> {
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property(readonly) BOOL supportsBoldItalicUnderlineShortcuts;

+ (id)styleProviderForStorage:(id)arg1;

- (id)paragraphStyleAtParIndex:(unsigned int)arg1 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2;

@end