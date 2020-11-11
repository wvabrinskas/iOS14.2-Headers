/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <BookDataStore/BookDataStore-Structs.h>
@class NSString;

@interface BDSICloudIdentityToken : NSObject {

	NSString* _token;

}

@property (nonatomic,copy) NSString * token;              //@synthesize token=_token - In the implementation block
+(id)tokenForCurrentIdentityIfCloudKitEnabled;
-(void)setToken:(NSString *)arg1 ;
-(NSString *)token;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithToken:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCurrentIdentity;
-(id)initFromArchive:(id)arg1 ;
-(id)_hashFor:(id)arg1 ;
@end
