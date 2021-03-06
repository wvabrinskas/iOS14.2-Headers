/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SearchAds.framework/SearchAds
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDictionary, ADInstallAttributionData, ADOdmlResponse;

@interface ADResponseData : NSObject {

	NSString* _impressionID;
	NSString* _metadata;
	NSString* _lineItem;
	NSString* _algoID;
	NSString* _privacy;
	NSString* _templateType;
	NSString* _clientRequestID;
	NSDictionary* _format;
	ADInstallAttributionData* _installAttribution;
	ADOdmlResponse* _odmlResponse;

}

@property (nonatomic,copy,readonly) NSString * impressionID;                                    //@synthesize impressionID=_impressionID - In the implementation block
@property (nonatomic,copy,readonly) NSString * metadata;                                        //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy,readonly) NSString * lineItem;                                        //@synthesize lineItem=_lineItem - In the implementation block
@property (nonatomic,copy,readonly) NSString * algoID;                                          //@synthesize algoID=_algoID - In the implementation block
@property (nonatomic,copy,readonly) NSString * privacy;                                         //@synthesize privacy=_privacy - In the implementation block
@property (nonatomic,copy,readonly) NSString * templateType;                                    //@synthesize templateType=_templateType - In the implementation block
@property (nonatomic,copy,readonly) NSString * clientRequestID;                                 //@synthesize clientRequestID=_clientRequestID - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * format;                                      //@synthesize format=_format - In the implementation block
@property (nonatomic,copy,readonly) ADInstallAttributionData * installAttribution;              //@synthesize installAttribution=_installAttribution - In the implementation block
@property (nonatomic,copy,readonly) ADOdmlResponse * odmlResponse;                              //@synthesize odmlResponse=_odmlResponse - In the implementation block
-(NSDictionary *)format;
-(NSString *)metadata;
-(NSString *)privacy;
-(NSString *)templateType;
-(id)initWithDict:(id)arg1 ;
-(NSString *)lineItem;
-(NSString *)algoID;
-(NSString *)clientRequestID;
-(ADOdmlResponse *)odmlResponse;
-(NSString *)impressionID;
-(ADInstallAttributionData *)installAttribution;
@end

