/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface ICInAppMessageMetadataEntry : NSObject <NSCopying, NSSecureCoding> {

	NSMutableDictionary* _metadataValues;
	NSObject*<OS_dispatch_queue> _accessQueue;

}
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)setMetadataValue:(id)arg1 forKey:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)metadataValueForKey:(id)arg1 ;
-(id)allMetadataValues;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

