/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SRSampling.h>
#import <libobjc.A.dylib/SRSampleExporting.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface CMFallStats : NSObject <SRSampling, SRSampleExporting, NSSecureCoding> {

	NSData* _data;
	BOOL _isNearFall;
	int _fallType;
	double _iOStime;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double iOStime;                      //@synthesize iOStime=_iOStime - In the implementation block
@property (nonatomic,readonly) int fallType;                        //@synthesize fallType=_fallType - In the implementation block
@property (nonatomic,readonly) BOOL isNearFall;                     //@synthesize isNearFall=_isNearFall - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(double)iOStime;
-(NSString *)description;
-(int)fallType;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3 ;
-(id)binarySampleRepresentation;
-(void)_decodeMeta;
-(id)initWithData:(id)arg1 ;
-(BOOL)isNearFall;
-(id)itemsIterator;
-(id)initWithBufferAndLength:(char*)arg1 length:(unsigned long long)arg2 ;
-(id)sr_exportRepresentationEnumerator;
-(void)dealloc;
@end

