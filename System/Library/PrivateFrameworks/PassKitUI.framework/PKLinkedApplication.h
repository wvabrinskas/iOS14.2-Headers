/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <libobjc.A.dylib/SKStoreProductViewControllerDelegate.h>

@protocol PKCancelable;
@class SSSoftwareLibraryItem, AMSLookupItem, NSHashTable, SKStoreProductViewController, NSArray, NSURL, UIImage, NSString, NSNumber;

@interface PKLinkedApplication : NSObject <SKStoreProductViewControllerDelegate> {

	SSSoftwareLibraryItem* _foundLibraryItem;
	AMSLookupItem* _foundStoreItem;
	os_unfair_lock_s _pendingLock;
	id<PKCancelable> _pendingUpdate;
	BOOL _loaded;
	BOOL _loading;
	NSHashTable* _observers;
	SKStoreProductViewController* _presentedViewController;
	BOOL _useSmallIcon;
	NSArray* _storeIDs;
	NSURL* _defaultLaunchURL;
	UIImage* _iconImage;

}

@property (nonatomic,copy) NSArray * storeIDs;                                 //@synthesize storeIDs=_storeIDs - In the implementation block
@property (nonatomic,copy) NSURL * defaultLaunchURL;                           //@synthesize defaultLaunchURL=_defaultLaunchURL - In the implementation block
@property (assign,nonatomic) BOOL useSmallIcon;                                //@synthesize useSmallIcon=_useSmallIcon - In the implementation block
@property (nonatomic,readonly) long long state; 
@property (getter=isInstalled,nonatomic,readonly) BOOL installed; 
@property (nonatomic,readonly) CGSize expectedIconSize; 
@property (nonatomic,readonly) UIImage * iconImage;                            //@synthesize iconImage=_iconImage - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * publisher; 
@property (nonatomic,readonly) NSNumber * averageRating; 
@property (nonatomic,readonly) NSString * price; 
@property (nonatomic,readonly) NSNumber * storeIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_openOptionsWithURL:(id)arg1 ;
-(UIImage *)iconImage;
-(BOOL)isInstalled;
-(NSString *)price;
-(NSNumber *)storeIdentifier;
-(void)removeObserver:(id)arg1 ;
-(NSString *)publisher;
-(id)init;
-(void)productViewControllerDidFinish:(id)arg1 ;
-(id)initWithStoreIDs:(id)arg1 defaultLaunchURL:(id)arg2 ;
-(long long)state;
-(void)installedApplicationsDidChangeNotification:(id)arg1 ;
-(void)_notifyObserversOfStateChange;
-(void)_updateApplicationStateWithCompletion:(/*^block*/id)arg1 ;
-(void)_reloadApplicationState;
-(void)openApplication:(id)arg1 withLaunchOptions:(unsigned long long)arg2 ;
-(void)openApplication:(id)arg1 withLaunchOptions:(unsigned long long)arg2 launchURL:(id)arg3 ;
-(id)_iconImageDescriptorForScale:(double)arg1 ;
-(void)_unloadApplicationState;
-(BOOL)_useLibraryItem;
-(CGSize)expectedIconSize;
-(NSNumber *)averageRating;
-(NSURL *)defaultLaunchURL;
-(void)setDefaultLaunchURL:(NSURL *)arg1 ;
-(BOOL)useSmallIcon;
-(id)initWithPass:(id)arg1 ;
-(NSString *)name;
-(void)reloadApplicationStateIfNecessary;
-(NSArray *)storeIDs;
-(void)addObserver:(id)arg1 ;
-(void)openApplication:(id)arg1 ;
-(void)setStoreIDs:(NSArray *)arg1 ;
-(void)setUseSmallIcon:(BOOL)arg1 ;
-(void)dealloc;
@end
