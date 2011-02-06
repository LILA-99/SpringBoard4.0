/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBRemoteLocalNotificationAlertDelegate.h"
#import "SpringBoard-Structs.h"
#import "SBDisplay.h"

@class SBProcessAssertion, SBProcess, NSTimer, SBCFBundle, NSArray, SBAppContextHostView, UIRemoteApplication, NSDictionary, NSString, NSMutableArray, PCPersistentTimer, UILocalNotification, NSDate;

@interface SBApplication : SBDisplay <SBRemoteLocalNotificationAlertDelegate> {
	NSString* _bundleIdentifier;
	NSString* _roleIdentifier;
	NSString* _displayIdentifier;
	NSString* _path;
	NSString* _bundleVersion;
	NSString* _longDisplayName;
	NSString* _defaultImageName;
	NSString* _author;
	NSArray* _folderNames;
	NSString* _fallbackFolderName;
	NSDictionary* _searchDomainLaunchInfo;
	SBCFBundle* _cachedBundle;
	SBProcess* _process;
	id _processObserver;
	SBProcessAssertion* _resumeProcessAssertion;
	SBProcessAssertion* _suspendingProcessAssertion;
		//	SBApplicationTimes* _times;
	double _modificationDate;
	NSString* _displayName;
	NSMutableArray* _tags;
	UIRemoteApplication* _remoteApplication;
	SBAppContextHostView* _contextHostView;
	NSDictionary* _seatbeltEnvVars;
	NSString* _signerIdentity;
	unsigned _activationEventSequenceNumber;
	NSTimer* _watchdogTimer;
	unsigned _monitoringLocaleAndTimeChanges : 1;
	unsigned _watchdogType : 4;
	unsigned _doingBackgroundNetworking : 16;
	unsigned _failedLaunchCount : 8;
	unsigned _provisioningProfileValidated : 1;
	unsigned _enabled : 1;
	unsigned _useDemoRole : 1;
	unsigned _isDefaultRole : 1;
	unsigned _isSystemApplication : 1;
	unsigned _isSystemProvisioningApplication : 1;
	unsigned _hasMiniAlerts : 1;
	unsigned _lastExitWasAbnormal : 1;
	unsigned _switcherManagedHostView : 1;
	unsigned _suspendedEventsOnly : 1;
	unsigned _usingLocation : 1;
	unsigned _roleDisallowsLocationBadge : 1;
	unsigned _deactivatingForForcedExit : 1;
	unsigned _isRevealable : 1;
	unsigned _uiRequiresPersistentWiFi : 1;
	unsigned _dataFlagsIsSet : 1;
	unsigned _isClassic : 1;
	unsigned _backgroundContinuationEnabled : 1;
	unsigned _backgroundContinuationEnabledValid : 1;
	unsigned _supportsAudioBackgroundMode : 1;
	unsigned _supportsLocationBackgroundMode : 1;
	unsigned _supportsVOIPBackgroundMode : 1;
	unsigned _supportsPushResumptionBackgroundMode : 1;
	unsigned _supportsContinuousBackgroundMode : 1;
	unsigned _wantsUnboundedTaskCompletionAssertions : 1;
	unsigned _hasBeenFrontmost : 1;
	unsigned _supportsPortraitOrientation : 1;
	unsigned _supportsPortraitUpsideDownOrientation : 1;
	unsigned _supportsLandscapeLeftOrientation : 1;
	unsigned _supportsLandscapeRightOrientation : 1;
	unsigned _installationAssertionCount : 8;
	unsigned _defaultStatusBarStyle : 8;
	BOOL _defaultStatusBarHidden;
	unsigned _defaultInterfaceOrientation : 8;
	unsigned _sbUsesNetwork : 8;
	unsigned _dataFlags : 8;
	unsigned _hasShownDataPlanAlertSinceLock : 1;
	unsigned _launchAlerts : 8;
	unsigned _suspendType : 8;
	unsigned _uninstalled : 1;
	int _prefererredBackgroundJetsamPriority;
	int _ratingRank;
	Class _iconClass;
	NSArray* _customMachServices;
	NSArray* _externalAccessoryProtocols;
	NSDictionary* _customSpotlightIconPaths;
	NSArray* _cachedLocalNotifications;
	NSTimer* _terminateIfRunningTimer;
	unsigned _cachedApplicationState;
		//	opaque_pthread_mutex_t _appStateMutex;
	NSDate* _nextApplicationWakeDate;
	PCPersistentTimer* _applicationWakeTimer;
	PCPersistentTimer* _localNotificationTimer;
	UILocalNotification* _pendingLocalNotification;
	SBProcessAssertion* _transientProcessAssertion;
	NSTimer* _transientSuspendTimer;
	int _transientAssertionType;
	SBProcessAssertion* _periodicWakeProcessAssertion;
	NSTimer* _periodicWakeSuspendTimer;
	SBProcessAssertion* _continuousBackgroundProcessAssertion;
	SBProcessAssertion* _simpleRemoteActionProcessAssertion;
}
@property(retain) SBProcess* process;
@property(assign, getter=isUsingLocation) BOOL usingLocation;
+(BOOL)allowAllInBackground;
+(id)systemSnapshotsDirectory;
+(void)flushLaunchAlertsOfType:(int)type;
+(void)userElapsedCPUTime:(double*)time systemElapsedCPUTime:(double*)time2 idleElapsedCPUTime:(double*)time3;
-(id)initWithBundleIdentifier:(id)bundleIdentifier roleIdentifier:(id)identifier path:(id)path bundle:(id)bundle infoDictionary:(id)dictionary isSystemApplication:(BOOL)application signerIdentity:(id)identity provisioningProfileValidated:(BOOL)validated;
-(void)_watchdogFired;
-(void)_watchdogFiredFired;
-(void)_startWatchdogTimerType:(int)type;
-(void)_cancelWatchdogTimer;
-(void)_markWatchdogCPUTimes;
-(void)startWatchdogTimerForPhoneSlideIfNecessary;
-(void)_scheduleWatchdogAssertionWithTimeout:(double*)timeout token:(unsigned)token;
-(unsigned)addWatchdogAssertionWithTimeout:(double*)timeout;
-(void)renewWatchdogAssertionWithToken:(unsigned)token timeout:(double*)timeout;
-(void)_clearWatchdogAssertions;
-(void)removeWatchdogAssertionWithToken:(unsigned)token;
-(void)_watchdogAssertExpired:(id)expired;
-(BOOL)shouldWatchdog;
-(BOOL)isBeingDebugged;
-(double)autoDimTime;
-(double)autoLockTime;
-(void)dealloc;
-(unsigned)activationEventSequenceNumber;
-(BOOL)isSameExecutableAsApplication:(id)application;
-(id)bundleIdentifier;
-(id)roleIdentifier;
-(void)setIsDefaultRole:(BOOL)role;
-(BOOL)isDefaultRole;
-(id)path;
-(double)modificationDate;
-(id)bundle;
-(void)purgeBundleCaches;
-(id)bundleVersion;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)enabled;
-(BOOL)suspendedEventsOnly;
-(void)setTags:(id)tags;
-(id)tags;
-(void)_addInternalDebugVariablesToEnvironment;
-(BOOL)hasMiniAlerts;
-(void)setHasMiniAlerts:(BOOL)alerts;
-(int)dataUsage;
-(BOOL)hasShownDataPlanAlertSinceLock;
-(void)setHasShownDataPlanAlertSinceLock:(BOOL)lock;
-(void)_setDataUsage:(int)usage;
-(void)setUsesBackgroundNetwork:(BOOL)network;
-(void)_setDoingBackgroundNetworking:(unsigned)networking;
-(void)setUsesEdgeNetwork:(BOOL)network;
-(void)setUsesWiFiNetwork:(BOOL)network;
-(void)_resetDataUsage;
-(id)displayIdentifier;
-(BOOL)isSystemApplication;
-(BOOL)isSystemProvisioningApplication;
-(BOOL)isWidgetApplication;
-(BOOL)isNowRecordingApplication;
-(BOOL)isUserRatable;
	//-(void)validateSystemProvisioningEntitlements:(XXStruct_kUSYWB*)entitlements;
-(id)customSpotlightIconPathsForKey:(id)key;
-(id)snapshotsDirectory;
-(void)flushSnapshotsForAllRoles:(BOOL)allRoles;
-(BOOL)shouldLaunchPNGless;
-(id)_additionalDisplayQualification;
-(id)_pathIfFileExistsAtPath:(id)path;
-(id)defaultImage:(BOOL*)image;
-(id)defaultImage:(BOOL*)image preferredScale:(float)scale originalOrientation:(int*)orientation currentOrientation:(int*)orientation4;
-(id)_defaultImagePathInBundle:(id)bundle baseResourceName:(id)name ofType:(id)type scale:(float*)scale;
-(Class)iconClass;
-(BOOL)isRevealable;
-(id)displayName;
-(void)setDisplayName:(id)name;
-(id)longDisplayName;
-(id)author;
-(int)ratingRank;
-(id)folderNames;
-(id)fallbackFolderName;
-(void)markLaunchTime;
-(void)launch;
-(void)activate;
-(void)deactivate;
-(void)deactivated;
-(void)kill;
-(BOOL)_shouldAutoLaunchForVoIP;
-(void)_setAutoLaunchForVoIP:(BOOL)voIP;
-(BOOL)_shouldAutoLaunchOnBootOrInstall:(BOOL)install;
-(void)autoLaunchIfNecessaryOnBootOrInstall:(BOOL)install;
-(void)_cancelAutoRelaunch;
-(void)_relaunchAfterExitIfNecessary;
-(int)statusBarStyle;
-(int)defaultStatusBarStyle;
-(int)statusBarStyleOverridesToCancel;
-(BOOL)defaultStatusBarHidden;
-(int)launchingInterfaceOrientationForCurrentOrientation:(int)currentOrientation;
-(void)willActivateOtherRole:(id)role;
-(BOOL)isClassic;
-(BOOL)classicDefaultStatusBarHidden;
-(BOOL)backgroundContinuationSupported;
-(BOOL)backgroundContinuationEnabled;
-(void)setBackgroundContinuationEnabled:(BOOL)enabled;
-(BOOL)backgroundContinuationAvailable;
-(void)exitedCommon;
-(void)exitedAbnormally;
-(void)exitedNormally;
-(int)prefererredBackgroundJetsamPriority;
-(int)effectiveBackgroundJetsamPriority;
-(id)applicationNextWakeDate;
-(void)setApplicationNextWakeDate:(id)date;
-(void)_updateApplicationWakeTimers;
-(void)wakeTimerFired;
-(void)VOIPDaemonRequestedResumeForConnectionUpdate;
-(void)sendOpenURL:(id)url;
-(id)loggingIdentifier;
-(id)_scheduledLocalNotifications;
-(void)_setScheduledLocalNotifications:(id)notifications;
-(id)_copyUnexpiredScheduledLocalNotifications;
-(id)scheduledLocalNotifications;
-(void)scheduleLocalNotification:(id)notification;
-(void)cancelLocalNotification:(id)notification;
-(void)_dismissAllLocalNotificationAlerts;
-(void)cancelAllLocalNotifications;
-(void)_setLastLocalNotificationFireDate:(id)date;
-(id)_lastLocalNotificationFireDate;
-(void)_setMonitoringForLocaleAndTimeChanges:(BOOL)localeAndTimeChanges;
-(void)_updateLocalNotificationTimers;
-(void)localNotificationTimerFired;
-(void)_fireNotification:(id)notification;
-(void)remoteLocalNotificationAlertShouldLaunch:(id)remoteLocalNotificationAlert forApplication:(id)application;
-(void)remoteLocalNotificationAlertShouldSnooze:(id)remoteLocalNotificationAlert forApplication:(id)application;
-(id)getPendingLocalNotification;
-(id)contextHostView;
-(void)_clearContextHostView;
-(void)_setContextHostView:(id)view;
-(void)hideContextHostView;
-(void)setSwitcherManagedHostView:(BOOL)view;
-(BOOL)switcherManagedHostView;
-(void)_unregisterRemoteViewsAndSheets;
-(id)launchdJobLabel;
-(id)seatbeltEnvironmentVariables;
-(void)setSeatbeltEnvironmentVariables:(id)variables;
-(unsigned)applicationState;
-(void)_updateCachedApplicationState;
-(unsigned)cachedApplicationState;
-(BOOL)hasBeenFrontmost;
-(void)setHasBeenFrontmost:(BOOL)frontmost;
-(void)_sendApplicationStateChangedNotification:(unsigned)notification;
-(void)setSuspendType:(int)type;
-(int)_suspensionType;
-(BOOL)supportsAudioBackgroundMode;
-(BOOL)supportsLocationBackgroundMode;
-(BOOL)supportsVOIPBackgroundMode;
-(BOOL)supportsContinuousBackgroundMode;
-(BOOL)wantsUnboundedTaskCompletionAssertions;
-(BOOL)supportsPushResumptionBackgroundMode;
-(void)resetSuspendSettings;
-(id)signerIdentity;
-(int)applicationSignatureState;
-(BOOL)_signatureNeedsExplicitUserTrust;
	//-(BOOL)_doesProfileMatchSignerIdentity:(MISProfileRef)identity;
-(id)_expirationDateForProvisioningProfile;
-(void)markApplicationIdentityAsTrusted;
-(BOOL)provisioningProfileValidated;
-(id)externalAccessoryProtocols;
-(void)launchSucceeded:(BOOL)succeeded;
-(void)prepareForUninstallation;
-(id)remoteApplication;
-(void)_purgeRemoteApplication;
-(BOOL)showLaunchAlertForType:(int)type;
-(void)resetLaunchAlertForType:(int)type;
-(double)elapsedCPUTime;
-(BOOL)isInstallationAssertionHeld;
-(void)incrementInstallationAssertionCount;
-(void)decrementInstallationAssertionCount;
-(void)notifyTaskSwitcherEntered:(BOOL)entered;
-(void)notifyOfTaskResume;
-(void)notifyOfImminentProcessAssertionExpiration;
-(void)resumeForMemoryWarning;
-(void)resumeToQuit;
-(id)_transientIdentifier;
-(double)_resumeDurationForTransientType:(int)transientType;
-(void)_transientResumeForType:(int)type;
-(void)_transientSuspendForTimerFired:(id)timerFired;
-(void)setNowPlayingWithAudio:(BOOL)audio;
-(void)takeAssertionWithTimeoutForSimpleRemoteAction;
-(void)sendSimpleRemoteAction:(int)action;
-(void)_cancelProcessAssertionForSimpleRemoteAction;
-(void)_dropTransientProcessAssertion;
-(id)_copyApplicationMetadata;
-(id)_localizedGenreNameForID:(int)anId;
-(id)_localizedGenreFromDictionary:(id)dictionary;
-(void)_takeResumeProcessAssertion;
-(void)_takeSuspendingProcessAssertion;
-(void)_dropResumeProcessAssertion;
-(void)_dropSuspendingProcessAssertion;
-(void)_resumeForPeriodicWake;
-(void)_dropPeriodicWakeProcessAssertion;
-(void)_suspendForPeriodicWakeTimerFired:(id)periodicWakeTimerFired;
-(id)_currentDefaultPNGName;
@end

