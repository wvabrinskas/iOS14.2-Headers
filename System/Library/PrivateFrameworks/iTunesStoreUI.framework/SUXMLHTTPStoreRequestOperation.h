/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesStore/ISOperation.h>

@class SSURLRequestProperties, SSAuthenticationContext, ISDataProvider;

@interface SUXMLHTTPStoreRequestOperation : ISOperation {

	/*^block*/id _outputBlock;
	SSURLRequestProperties* _requestProperties;
	SSAuthenticationContext* _authenticationContext;
	ISDataProvider* _dataProvider;

}

@property (nonatomic,retain) SSAuthenticationContext * authenticationContext;              //@synthesize authenticationContext=_authenticationContext - In the implementation block
@property (nonatomic,retain) ISDataProvider * dataProvider;                                //@synthesize dataProvider=_dataProvider - In the implementation block
@property (copy) id outputBlock; 
-(void)setAuthenticationContext:(SSAuthenticationContext *)arg1 ;
-(void)run;
-(void)setDataProvider:(ISDataProvider *)arg1 ;
-(void)setOutputBlock:(id)arg1 ;
-(SSAuthenticationContext *)authenticationContext;
-(ISDataProvider *)dataProvider;
-(id)outputBlock;
-(id)initWithRequestProperties:(id)arg1 ;
@end
