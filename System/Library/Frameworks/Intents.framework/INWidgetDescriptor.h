/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Intents/Intents-Structs.h>
@class NSString;

@interface INWidgetDescriptor : NSObject {

	NSString* _extensionBundleIdentifier;
	NSString* _kind;
	NSString* _intentClassName;
	long long _preferredSizeClass;

}

@property (nonatomic,copy,readonly) NSString * extensionBundleIdentifier;              //@synthesize extensionBundleIdentifier=_extensionBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * kind;                                   //@synthesize kind=_kind - In the implementation block
@property (nonatomic,copy,readonly) NSString * intentClassName;                        //@synthesize intentClassName=_intentClassName - In the implementation block
@property (nonatomic,readonly) long long preferredSizeClass;                           //@synthesize preferredSizeClass=_preferredSizeClass - In the implementation block
@property (nonatomic,readonly) CGSize preferredSize; 
-(NSString *)kind;
-(id)initWithExtensionBundleIdentifier:(id)arg1 kind:(id)arg2 intentClassName:(id)arg3 preferredSizeClass:(long long)arg4 ;
-(BOOL)supportsIntent:(id)arg1 ;
-(id)_extensionRecordWithError:(id*)arg1 ;
-(long long)preferredSizeClass;
-(id)description;
-(NSString *)extensionBundleIdentifier;
-(NSString *)intentClassName;
-(CGSize)preferredSize;
@end
