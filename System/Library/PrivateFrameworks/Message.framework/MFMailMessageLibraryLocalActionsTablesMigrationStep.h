/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class EDPersistenceDatabaseConnection;

@interface MFMailMessageLibraryLocalActionsTablesMigrationStep : NSObject {

	EDPersistenceDatabaseConnection* _connection;

}

@property (nonatomic,retain) EDPersistenceDatabaseConnection * connection;              //@synthesize connection=_connection - In the implementation block
+(id)log;
-(void)setConnection:(EDPersistenceDatabaseConnection *)arg1 ;
-(BOOL)performMigrationStep;
-(id)_serverMessagesTableDefinition;
-(id)_serverMessagesMessageIndexDefinition;
-(id)_serverLabelsTableDefinition;
-(id)_localMessageActionsTableDefinition;
-(id)_localMessageActionsMailboxRowIDIndexDefinition;
-(id)_actionMessagesTableDefinition;
-(id)_actionMessagesActionIndexDefinition;
-(id)_actionMessagesMessageIndexDefinition;
-(id)_actionMessagesDestinationMessageIndexDefinition;
-(BOOL)_populateServerMessages;
-(id)_actionLabelsTableDefinition;
-(id)_actionLabelsActionIndexDefinition;
-(id)_actionLabelsLabelIndexDefinition;
-(id)_actionFlagsTableDefinition;
-(id)_actionFlagsActionIndexDefinition;
-(id)_offlineCacheOperations;
-(id)initWithSQLiteConnection:(id)arg1 ;
-(EDPersistenceDatabaseConnection *)connection;
@end
