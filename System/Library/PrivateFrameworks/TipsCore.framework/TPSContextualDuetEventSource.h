/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TipsCore/TipsCore-Structs.h>
#import <TipsCore/TPSSerializableObject.h>

@class NSString;

@interface TPSContextualDuetEventSource : TPSSerializableObject {

	NSString* _sourceID;
	NSString* _bundleID;

}

@property (nonatomic,copy) NSString * sourceID;              //@synthesize sourceID=_sourceID - In the implementation block
@property (nonatomic,copy) NSString * bundleID;              //@synthesize bundleID=_bundleID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classSet;
-(NSString *)bundleID;
-(id)initWithDictionary:(id)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(NSString *)sourceID;
-(id)initWithCoder:(id)arg1 ;
-(void)setSourceID:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

