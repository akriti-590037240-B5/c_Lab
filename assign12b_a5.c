#include <stdio.h>

enum State {
    IDLE, COIN_INSERTED, DISPENSE, OUT_OF_STOCK
};

enum Command {
    INSERT_COIN, SELECT_ITEM, FINISH, RESTOCK
};

enum State nextState(enum State state,
                     enum Command command, int stock) {

    switch (state) {
        case IDLE:
            if (command == INSERT_COIN)
                return COIN_INSERTED;
            break;

        case COIN_INSERTED:
            if (command == SELECT_ITEM) {
                if (stock > 0)
                    return DISPENSE;
                else
                    return OUT_OF_STOCK;
            }
            break;

        case DISPENSE:
            if (command == FINISH)
                return IDLE;
            break;

        case OUT_OF_STOCK:
            if (command == RESTOCK && stock > 0)
                return IDLE;
            break;
    }

    return state;
}

int main() {
    enum State state = IDLE;
    enum Command command;
    int stock = 2, choice;

    printf("Initial State: IDLE\n");

    do {
        printf("\n1. Insert Coin");
        printf("\n2. Select Item");
        printf("\n3. Finish");
        printf("\n4. Restock");
        printf("\n5. Exit");

        printf("\nEnter command: ");
        scanf("%d", &choice);

        if (choice == 5)
            break;

        if (choice < 1 || choice > 4) {
            printf("Invalid command\n");
            continue;
        }

        command = (enum Command)(choice - 1);

        enum State oldState = state;

        state = nextState(state, command, stock);

        if (oldState == COIN_INSERTED &&
            command == SELECT_ITEM &&
            stock > 0 && state == DISPENSE) {
            stock--;
        }

        printf("Previous State: %d", oldState);
        printf("\nCurrent State: %d\n", state);

    } while (1);

    return 0;
}