//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIAlertViewDelegate.h"

@class AVPlayer, ManagerUnarchiver, NSArray, NSData, NSDate, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSTimer, SCChatLoader, SCSnapLoader, SCStories, SCStoryLoader, User;

@interface Manager : NSObject <UIAlertViewDelegate>
{
    ManagerUnarchiver *unarchiver;
    _Bool _shouldRecordFirstSnapWhenLaunchApp;
    _Bool _shouldRecordFirstStoryWhenLaunchApp;
    _Bool _fetchingAllUpdatesFromServer;
    NSTimer *_snapDataTimer;
    User *_user;
    SCStories *_stories;
    NSMutableDictionary *_times;
    AVPlayer *_centralPlayerA;
    AVPlayer *_centralPlayerB;
    SCStoryLoader *_storyLoader;
    SCSnapLoader *_snapLoader;
    SCChatLoader *_chatLoader;
    NSTimer *_centralTimer;
    NSDate *_referenceDateForFeedTimestamps;
    NSData *_pushNotificationDeviceToken;
    NSArray *_enabledIAPCurrencies;
    NSArray *_enabledLensStoreCurrencies;
    unsigned long long _seqno;
    unsigned long long _sessionCount;
    NSObject<OS_dispatch_queue> *_flushEventsQueue;
    NSObject<OS_dispatch_queue> *_spotlightIndexingQueue;
}

+ (void)clearUnusedVideoURLsExcludingURLsFromSnaps:(id)arg1 andStories:(id)arg2;
+ (void)performLoginWithUsernameOrEmail:(id)arg1 password:(id)arg2 preAuthToken:(id)arg3 twoFAMethod:(int)arg4 confirmReactivation:(_Bool)arg5 rememberDevice:(_Bool)arg6 fromDeepLink:(_Bool)arg7 onComplete:(CDUnknownBlockType)arg8;
+ (id)inspectJsonValidity:(id)arg1;
+ (id)shared;
+ (_Bool)isInitialized;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *spotlightIndexingQueue; // @synthesize spotlightIndexingQueue=_spotlightIndexingQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *flushEventsQueue; // @synthesize flushEventsQueue=_flushEventsQueue;
@property(nonatomic) unsigned long long sessionCount; // @synthesize sessionCount=_sessionCount;
@property(nonatomic) unsigned long long seqno; // @synthesize seqno=_seqno;
@property(retain, nonatomic) NSArray *enabledLensStoreCurrencies; // @synthesize enabledLensStoreCurrencies=_enabledLensStoreCurrencies;
@property(retain, nonatomic) NSArray *enabledIAPCurrencies; // @synthesize enabledIAPCurrencies=_enabledIAPCurrencies;
@property(retain, nonatomic) NSData *pushNotificationDeviceToken; // @synthesize pushNotificationDeviceToken=_pushNotificationDeviceToken;
@property(nonatomic) _Bool fetchingAllUpdatesFromServer; // @synthesize fetchingAllUpdatesFromServer=_fetchingAllUpdatesFromServer;
@property(nonatomic) _Bool shouldRecordFirstStoryWhenLaunchApp; // @synthesize shouldRecordFirstStoryWhenLaunchApp=_shouldRecordFirstStoryWhenLaunchApp;
@property(nonatomic) _Bool shouldRecordFirstSnapWhenLaunchApp; // @synthesize shouldRecordFirstSnapWhenLaunchApp=_shouldRecordFirstSnapWhenLaunchApp;
@property(retain, nonatomic) NSDate *referenceDateForFeedTimestamps; // @synthesize referenceDateForFeedTimestamps=_referenceDateForFeedTimestamps;
@property(retain, nonatomic) NSTimer *centralTimer; // @synthesize centralTimer=_centralTimer;
@property(retain, nonatomic) SCChatLoader *chatLoader; // @synthesize chatLoader=_chatLoader;
@property(retain, nonatomic) SCSnapLoader *snapLoader; // @synthesize snapLoader=_snapLoader;
@property(retain, nonatomic) SCStoryLoader *storyLoader; // @synthesize storyLoader=_storyLoader;
@property(retain, nonatomic) AVPlayer *centralPlayerB; // @synthesize centralPlayerB=_centralPlayerB;
@property(retain, nonatomic) AVPlayer *centralPlayerA; // @synthesize centralPlayerA=_centralPlayerA;
@property(retain, nonatomic) NSMutableDictionary *times; // @synthesize times=_times;
@property(retain, nonatomic) SCStories *stories; // @synthesize stories=_stories;
@property(retain, nonatomic) User *user; // @synthesize user=_user;
@property(retain, nonatomic) NSTimer *snapDataTimer; // @synthesize snapDataTimer=_snapDataTimer;
- (void).cxx_destruct;
- (_Bool)wasStoriesUpdated;
- (void)requestStudySettingsWithDeviceIdHash:(id)arg1 backgroundQueue:(id)arg2;
- (void)fetchRegisterStudySettings;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)resetCentralPlayers;
- (void)initCentralPlayers;
- (void)postServerChallenge;
- (void)logConversationsResponse:(id)arg1;
- (void)clearViewedStories;
- (void)clearExpiredStories;
- (void)clearExpiredAndViewedStories;
- (void)didAppStartupComplete;
- (_Bool)userHasValidRequest;
- (void)willEnterForegroundFromRemoteNotification:(_Bool)arg1;
- (void)didEnterBackground;
- (void)prepareForBecomeActiveFromRemoteNotification:(_Bool)arg1;
- (void)prepareForResignActive;
- (void)startTimer:(id)arg1 source:(long long)arg2;
- (void)startTimerIfNecessary;
- (void)markSnapAsViewed:(id)arg1;
- (void)tick:(id)arg1;
- (_Bool)hasUnviewedChats;
- (_Bool)hasUnviewedCash;
- (int)hasUnviewedSnaps;
- (long long)unreadCount;
- (void)registerVoipDeviceToken:(id)arg1;
- (void)registerDeviceToken:(id)arg1;
- (void)checkMobile;
- (void)verifyMobile:(id)arg1 shouldSkipConfirmation:(_Bool)arg2 type:(long long)arg3;
- (void)verifyMobile:(id)arg1 shouldSkipConfirmation:(_Bool)arg2;
- (void)verifyMobile:(id)arg1 type:(long long)arg2;
- (void)verifyMobile:(id)arg1;
- (void)verifyMobilePreLogin:(id)arg1 phoneNumber:(id)arg2 usernameOrEmail:(id)arg3 countryCode:(id)arg4 preAuthToken:(id)arg5;
- (void)_setMobile:(id)arg1 withCountryCode:(id)arg2 phoneCall:(_Bool)arg3 reverified:(_Bool)arg4 isResetPassword:(_Bool)arg5 usernameOrEmail:(id)arg6 preAuthToken:(id)arg7;
- (void)setMobile:(id)arg1 withCountryCode:(id)arg2 phoneCall:(_Bool)arg3 usernameOrEmail:(id)arg4 preAuthToken:(id)arg5;
- (void)setMobile:(id)arg1 withCountryCode:(id)arg2 phoneCall:(_Bool)arg3 reverified:(_Bool)arg4;
- (void)verifyCaptchaWithId:(id)arg1 solution:(id)arg2 isResetPassword:(_Bool)arg3 usernameOrEmail:(id)arg4 successQueue:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)fetchCaptchaImagesWithSuccessQueue:(id)arg1 isResetPassword:(_Bool)arg2 usernameOrEmail:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)getPasswordStrengthPreLogin:(id)arg1 quickCheck:(_Bool)arg2 preAuthToken:(id)arg3 usernameOrEmail:(id)arg4 onComplete:(CDUnknownBlockType)arg5;
- (void)changePassword:(id)arg1 isResetPassword:(_Bool)arg2 preAuthToken:(id)arg3 usernameOrEmail:(id)arg4 onComplete:(CDUnknownBlockType)arg5;
- (void)doLogoutRequest:(_Bool)arg1;
- (void)logoutForced:(_Bool)arg1;
- (void)forceLogout;
- (void)logout;
- (CDUnknownBlockType)fetchConversationsFailureBlock;
- (CDUnknownBlockType)fetchStoriesFailureBlock;
- (CDUnknownBlockType)fetchUpdatesFailureBlock;
- (CDUnknownBlockType)fetchStoriesSuccessBlock;
- (CDUnknownBlockType)fetchConversationsSuccessBlock;
- (void)checkResyncVersion:(id)arg1;
- (CDUnknownBlockType)fetchUpdatesSuccessBlock;
- (void)fetchStoriesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchStories;
- (void)fetchUpdatesWithCompletionHandler:(CDUnknownBlockType)arg1 includeStories:(_Bool)arg2 didHappendWhenAppLaunch:(_Bool)arg3;
- (void)fetchUpdatesSuccessWithResponse:(id)arg1 withStories:(_Bool)arg2 didPullToRefresh:(_Bool)arg3 didHappenOnAppLaunch:(_Bool)arg4 onCompletion:(CDUnknownBlockType)arg5;
- (void)fetchUpdates;
- (void)fetchUpdatesAndStoriesFromLaunch;
- (void)fetchUpdatesAndStories;
- (id)parametersForFetchUpdates;
- (void)markViewedStories:(_Bool)arg1;
- (void)_flushLoggerEvents;
- (void)logFlushedEvents:(id)arg1;
- (void)markViewedSnaps;
- (id)getUpdatedSnapsJsonWithUpdatedSnaps:(id)arg1;
- (id)getUpdatedSnapsDictionaryWithUpdatedSnaps:(id)arg1;
- (void)applyBackgroundFetchUpdates;
- (void)registerUsername:(id)arg1;
- (id)jsonStringForEvents:(id)arg1;
- (void)dealloc;
- (void)addObservers;
- (_Bool)compareSeqno:(unsigned long long)arg1;
- (void)incSeqno;
- (unsigned long long)getSeqno;
- (_Bool)isUserCreated;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

