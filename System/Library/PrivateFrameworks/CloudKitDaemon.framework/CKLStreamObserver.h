/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CKLEventFilter, NSDateFormatter, NSMutableDictionary, NSString;

@interface CKLStreamObserver : NSObject {

	BOOL _colorOutput;
	CKLEventFilter* _filter;
	NSDateFormatter* _formatter;
	NSMutableDictionary* _processNamesByPath;

}

@property (nonatomic,retain) CKLEventFilter * filter;                               //@synthesize filter=_filter - In the implementation block
@property (nonatomic,readonly) NSDateFormatter * formatter;                         //@synthesize formatter=_formatter - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * processNamesByPath;              //@synthesize processNamesByPath=_processNamesByPath - In the implementation block
@property (assign,nonatomic) BOOL simulatorOnly; 
@property (assign,nonatomic) BOOL onlyTestLogs; 
@property (assign,nonatomic) BOOL colorOutput;                                      //@synthesize colorOutput=_colorOutput - In the implementation block
@property (nonatomic,retain) NSString * processName; 
-(void)setProcessName:(NSString *)arg1 ;
-(void)_handleEvent:(id)arg1 ;
-(void)finish;
-(void)setFilter:(CKLEventFilter *)arg1 ;
-(CKLEventFilter *)filter;
-(NSDateFormatter *)formatter;
-(NSString *)processName;
-(id)initWithLogTypes:(unsigned long long)arg1 ;
-(void)eventMatched:(id)arg1 ;
-(void)setOnlyTestLogs:(BOOL)arg1 ;
-(BOOL)onlyTestLogs;
-(NSMutableDictionary *)processNamesByPath;
-(void)setSimulatorOnly:(BOOL)arg1 ;
-(BOOL)simulatorOnly;
-(id)_processNameForPath:(id)arg1 ;
-(BOOL)colorOutput;
-(void)setColorOutput:(BOOL)arg1 ;
-(void)setProcessNamesByPath:(NSMutableDictionary *)arg1 ;
@end
