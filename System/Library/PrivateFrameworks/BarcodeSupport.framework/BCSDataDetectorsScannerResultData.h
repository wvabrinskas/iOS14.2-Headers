/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BCSParsedDataPrivate.h>

@class NSString, DDScannerResult;

@interface BCSDataDetectorsScannerResultData : NSObject <BCSParsedDataPrivate> {

	long long _type;
	NSString* _extraPreviewText;
	DDScannerResult* _scannerResult;

}

@property (nonatomic,readonly) DDScannerResult * scannerResult;               //@synthesize scannerResult=_scannerResult - In the implementation block
@property (nonatomic,readonly) long long type;                                //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * extraPreviewText;              //@synthesize extraPreviewText=_extraPreviewText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
-(DDScannerResult *)scannerResult;
-(NSString *)extraPreviewText;
-(id)initWithScannerResult:(id)arg1 type:(long long)arg2 extraPreviewText:(id)arg3 ;
@end
