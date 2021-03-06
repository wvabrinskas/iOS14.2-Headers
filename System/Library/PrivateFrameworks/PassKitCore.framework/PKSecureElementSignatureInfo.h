/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, PKSecureElementCertificateSet;

@interface PKSecureElementSignatureInfo : NSObject <NSCopying, NSSecureCoding> {

	NSString* _sequenceCounter;
	NSString* _platformIdentifier;
	PKSecureElementCertificateSet* _certificates;
	unsigned long long _certificateVersion;

}

@property (nonatomic,copy,readonly) NSString * sequenceCounter;                                //@synthesize sequenceCounter=_sequenceCounter - In the implementation block
@property (nonatomic,copy,readonly) NSString * platformIdentifier;                             //@synthesize platformIdentifier=_platformIdentifier - In the implementation block
@property (nonatomic,copy,readonly) PKSecureElementCertificateSet * certificates;              //@synthesize certificates=_certificates - In the implementation block
@property (nonatomic,readonly) unsigned long long certificateVersion;                          //@synthesize certificateVersion=_certificateVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(PKSecureElementCertificateSet *)certificates;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)sequenceCounter;
-(NSString *)platformIdentifier;
-(id)initWithSecureElementCertificateSet:(id)arg1 sequenceCounter:(id)arg2 platformIdentifier:(id)arg3 certificateVersion:(unsigned long long)arg4 ;
-(unsigned long long)certificateVersion;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

