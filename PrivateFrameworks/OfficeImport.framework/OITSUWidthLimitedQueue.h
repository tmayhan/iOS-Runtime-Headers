/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSObject<OS_dispatch_queue>;

@interface OITSUWidthLimitedQueue : NSObject {
    int mLimit;
    NSObject<OS_dispatch_queue> *mManagerQueue;
    int mReaderCount;
    int mSpinLock;
    NSObject<OS_dispatch_queue> *mTargetQueue;
}

- (void)dealloc;
- (id)init;
- (id)initWithLimit:(unsigned int)arg1;
- (void)performAsync:(id)arg1;

@end