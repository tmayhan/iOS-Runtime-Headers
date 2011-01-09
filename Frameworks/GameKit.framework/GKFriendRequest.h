/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSDate, NSString, GKPlayer;



@interface GKFriendRequest : NSObject 
{
    NSString *_requestID;
    GKPlayer *_player;
    NSString *_message;
    NSDate *_date;
}

@property(retain) NSDate *date;
@property(retain) NSString *message;
@property(retain) GKPlayer *player;
@property(retain) NSString *requestID;

+ (id)friendRequestWithDictionary:(id)arg1;
+ (id)friendRequestsWithDictionaries:(id)arg1;

- (id)initWithRequestID:(id)arg1;
- (id)requestID;
- (void)setRequestID:(id)arg1;
- (id)player;
- (void)setPlayer:(id)arg1;
- (void)setMessage:(id)arg1;
- (id)message;
- (id)date;
- (void)setDate:(id)arg1;

@end