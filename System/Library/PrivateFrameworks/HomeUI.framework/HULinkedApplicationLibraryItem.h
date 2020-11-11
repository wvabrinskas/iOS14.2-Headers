/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HULinkedApplicationItem.h>
#import <libobjc.A.dylib/NSCopying.h>

@class LSApplicationProxy;

@interface HULinkedApplicationLibraryItem : HULinkedApplicationItem <NSCopying> {

	LSApplicationProxy* _applicationProxy;

}

@property (nonatomic,readonly) LSApplicationProxy * applicationProxy;              //@synthesize applicationProxy=_applicationProxy - In the implementation block
-(id)init;
-(id)bundleIdentifier;
-(LSApplicationProxy *)applicationProxy;
-(id)initWithApplicationProxy:(id)arg1 ;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithApplicationProxy:(id)arg1 associatedAccessories:(id)arg2 ;
@end
