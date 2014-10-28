/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@class NSDate, PLEntryNotificationOperatorComposition, PLNSNotificationOperatorComposition;

@interface PLProcessMonitorAgent : PLAgent {
    PLNSNotificationOperatorComposition *_asertionNotifications;
    PLEntryNotificationOperatorComposition *_batteryLevelChanged;
    NSDate *_currentCachedDate;
    double _currentCachedTotalCPUTime;
    BOOL _firstBoot;
    NSDate *_previousCacheDate;
}

@property(retain) PLNSNotificationOperatorComposition * asertionNotifications;
@property(retain) PLEntryNotificationOperatorComposition * batteryLevelChanged;
@property(retain) NSDate * currentCachedDate;
@property double currentCachedTotalCPUTime;
@property BOOL firstBoot;
@property(retain) NSDate * previousCacheDate;

+ (id)accountingGroupDefinitions;
+ (id)defaults;
+ (id)entryEventBackwardDefinitionProcessMonitor;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventForwardProcessID;
+ (id)entryEventIntervalDefinitionProcessMonitorDiff;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (void)load;

- (void).cxx_destruct;
- (id)asertionNotifications;
- (id)batteryLevelChanged;
- (id)currentCachedDate;
- (double)currentCachedTotalCPUTime;
- (id)eventForwardProcessIDForPID:(int)arg1;
- (BOOL)firstBoot;
- (id)init;
- (void)initOperatorDependancies;
- (BOOL)isCachedForProcessID:(int)arg1 andName:(id)arg2;
- (BOOL)isCachedForProcessID:(int)arg1;
- (void)log;
- (void)logEventBackwardProcessMonitor;
- (void)logEventBackwardProcessMonitorUsingCache;
- (void)logEventIntervalProcessMonitorInterval;
- (void)logEventIntervalProcessMonitorIntervalUsingCache;
- (id)previousCacheDate;
- (id)processMonitorMultiKeyFromProcessID:(id)arg1;
- (void)setAsertionNotifications:(id)arg1;
- (void)setBatteryLevelChanged:(id)arg1;
- (void)setCurrentCachedDate:(id)arg1;
- (void)setCurrentCachedTotalCPUTime:(double)arg1;
- (void)setFirstBoot:(BOOL)arg1;
- (void)setPreviousCacheDate:(id)arg1;
- (id)trimmingConditionsForRolloverAtDate:(id)arg1;
- (void)updateProcessMonitorCache;

@end